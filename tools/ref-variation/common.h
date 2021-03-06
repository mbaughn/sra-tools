/*==============================================================================
*
*                            PUBLIC DOMAIN NOTICE
*               National Center for Biotechnology Information
*
*  This software/database is a "United States Government Work" under the
*  terms of the United States Copyright Act.  It was written as part of
*  the author's official duties as a United States Government employee and
*  thus cannot be copyrighted.  This software/database is freely available
*  to the public for use. The National Library of Medicine and the U.S.
*  Government have not placed any restriction on its use or reproduction.
*
*  Although all reasonable efforts have been taken to ensure the accuracy
*  and reliability of the software and data, the NLM and the U.S.
*  Government do not and cannot warrant the performance or results that
*  may be obtained by using this software or data. The NLM and the U.S.
*  Government disclaim all warranties, express or implied, including
*  warranties of performance, merchantability or fitness for any particular
*  purpose.
*
*  Please cite the author in any work or product based on this material.
*
* ===========================================================================
*
*/

#include <stdlib.h>

namespace KSearch
{
    class CVRefVariation;
}

namespace Common
{
    bool find_variation_core_step (KSearch::CVRefVariation& obj,
        char const* ref_slice, size_t ref_slice_size,
        size_t& ref_pos_in_slice,
        char const* var, size_t var_len, size_t var_len_on_ref,
        size_t chunk_size, size_t chunk_no_last,
        size_t& bases_start, size_t& chunk_no_start, size_t& chunk_no_end);
}
