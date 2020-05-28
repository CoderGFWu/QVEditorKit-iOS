//
//  XYClipDataItem.h
//  XiaoYingSDK
//
//  Created by xuxinyuan on 5/12/15.
//  Copyright (c) 2015 XiaoYing. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XYClipDataItem : NSObject

@property (nonatomic) UInt64 startPos;
@property (nonatomic) UInt64 endPos;
@property (nonatomic) float timeScale;
@property (nonatomic, strong) NSString *clipFilePath;
@property (nonatomic, strong) NSString *filterFilePath;
@property (nonatomic) UInt32 filterConfigIndex;

@property (nonatomic, strong) NSString *musicFilePath;
@property (nonatomic) UInt64 dwMusicTrimStartPos;
@property (nonatomic) UInt64 dwMusicTrimLen;

@property (nonatomic) CGRect cropRect;
@property (nonatomic) UInt64 rotation;

@property (nonatomic) BOOL isGIF;

@property (nonatomic) NSInteger clipIndex;
@property (nonatomic, copy) NSString *identifier;//clip 的唯一标识符 新增by sunshine
@end
