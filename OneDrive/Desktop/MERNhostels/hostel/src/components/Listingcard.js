import  React, { useState } from 'react';
import Card from '@mui/material/Card';
import CardContent from '@mui/material/CardContent';
import CardMedia from '@mui/material/CardMedia';
import Typography from '@mui/material/Typography';
import { Button, CardActionArea, CardActions } from '@mui/material';
import $ from 'jquery';
import './Listingcard.scss';




export default function Listingcard(props) {
   
    const [isActive, setActive] = useState(false);

    const toggleClass = () => {
        setActive(!isActive);
    };

  return (

    
    <div className= {isActive ? 'open card3 flex-row1 ': 'card3 flex-row1'} 
      onClick={toggleClass} 
    >
      <img  src='https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcTBaTZFmnOHzFnesH_g6YwU7-AiyY2fQg1Cow&usqp=CAU' className='book hidden md:block'/>
      <div className='flex-column1 info '>
        <div className='title'>The Hostel</div>
        <div className='author'>MEC</div>
        <div className=' bottom summary '>
          Lorem, ipsum dolor sit amet consectetur adipisicing elit. Quod ratione impedit temporibus maiores autem aperiam assumenda exercitationem, quisquam nobis esse.
        </div>
      </div>
      <div className='flex-column1 group '>
        <div className='members mr-0 ml-[30px] md:ml-0  '>
          <span className='sm:text-sm current'>14</span> /
          <span className='sm:text-sm max'>30</span>
        </div>
        <div className=' bottom mr-0 ml-[30px] md:ml-0'>
          <button className=' simple md:block'>Join</button>
        </div>
      </div>
    </div>
   )
}

