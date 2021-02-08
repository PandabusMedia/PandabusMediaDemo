//
//  InfosDefines.h
//  FFAdSDK
//
//  Created by tudd on 2020/3/4.
//  Copyright © 2020 com.fengfei. All rights reserved.
//

#ifndef InfosDefines_h
#define InfosDefines_h

typedef NS_ENUM(NSUInteger, ActionType) {
    UP = 1,     //上拉
    DOWN,       //下拉
    DEFAULT     //第一次
};

typedef NS_ENUM(NSUInteger, ChannelType) {
    HEADLINE = 1000, //头条
    ENTERTAINMENT,   //娱乐
    FINANCE,         //财经
    SCIENCE,         //科技
    MILITARY,        //军事
    SPORTS,          //体育
    HISTORY,         //历史
    CARS,            //汽车
    FASHION,         //时尚
    REALESTATE,      //房产
    TRAVEL,          //旅游
    HEALTH,          //健康
    EDUCATION,       //教育
    CULTURE,         //文化
    LITTLEVIDEO      //小视频
};


#endif /* InfosDefines_h */
