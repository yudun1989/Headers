//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSDictionary, NSString;

@interface TBRDAppendedFeedModel : TBJSONModel
{
    NSString *_appendedFeedback;
    NSString *_intervalDay;
    NSString *_reply;
    NSArray *_appendFeedPicPathList;
    NSArray *_appendFeedPicList;
    NSDictionary *_video;
}

@property(retain, nonatomic) NSDictionary *video; // @synthesize video=_video;
@property(retain, nonatomic) NSArray *appendFeedPicList; // @synthesize appendFeedPicList=_appendFeedPicList;
@property(retain, nonatomic) NSArray *appendFeedPicPathList; // @synthesize appendFeedPicPathList=_appendFeedPicPathList;
@property(copy, nonatomic) NSString *reply; // @synthesize reply=_reply;
@property(copy, nonatomic) NSString *intervalDay; // @synthesize intervalDay=_intervalDay;
@property(copy, nonatomic) NSString *appendedFeedback; // @synthesize appendedFeedback=_appendedFeedback;
- (void).cxx_destruct;

@end

