//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBHTwelveBaseContent : TBJSONModel
{
    NSString *_img;
    NSString *_gifImg;
    long long _aniTime;
    long long _aniInterval;
}

@property(nonatomic) long long aniInterval; // @synthesize aniInterval=_aniInterval;
@property(nonatomic) long long aniTime; // @synthesize aniTime=_aniTime;
@property(retain, nonatomic) NSString *gifImg; // @synthesize gifImg=_gifImg;
@property(retain, nonatomic) NSString *img; // @synthesize img=_img;
- (void).cxx_destruct;

@end

