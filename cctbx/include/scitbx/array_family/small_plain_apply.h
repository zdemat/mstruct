/* *****************************************************
   THIS IS AN AUTOMATICALLY GENERATED FILE. DO NOT EDIT.
   *****************************************************

   Generated by:
     scitbx.source_generators.array_family.generate_apply
 */

#ifndef SCITBX_ARRAY_FAMILY_SMALL_PLAIN_APPLY_H
#define SCITBX_ARRAY_FAMILY_SMALL_PLAIN_APPLY_H

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#include <scitbx/type_holder.h>
#include <scitbx/array_family/small_plain.h>
#include <scitbx/array_family/detail/generic_array_functors.h>

namespace scitbx { namespace af {

  template<
    typename UnaryOperation, typename ElementType,
    std::size_t N, typename ReturnElementType>
  inline
  small_plain<ReturnElementType, N>
  apply(UnaryOperation const& op,
        small_plain<ElementType, N> const& a,
        type_holder<ReturnElementType> /*result_type_holder*/) {
    typedef small_plain<ReturnElementType, N> return_array_type;
    return return_array_type(a.size(),
      make_init_functor(
        array_functor_a<UnaryOperation, ElementType, ReturnElementType>(
          op, a.begin())));
  }

  template<typename UnaryOperation, typename ElementType, std::size_t N>
  inline
  small_plain<typename UnaryOperation::result_type, N>
  apply(UnaryOperation const& op,
        small_plain<ElementType, N> const& a) {
    return apply(op, a, type_holder<typename UnaryOperation::result_type>());
  }

}} // namespace scitbx::af

#endif // DOXYGEN_SHOULD_SKIP_THIS

#endif // SCITBX_ARRAY_FAMILY_SMALL_PLAIN_APPLY_H