import React from 'react'
import Listingcard from '../components/Listingcard'


export const Hostellisting = () => {
  return (
    <div className='container mt-9'>
    <div className='w-full justify-center  list flex-column  mx-5 md:mx-9 md:w-[700px]'>
       <Listingcard/>
       <Listingcard/>
       <Listingcard/>
       <Listingcard/>
       <Listingcard/>
       <Listingcard/>
      
    </div>
    </div>
  )
}
