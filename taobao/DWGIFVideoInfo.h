//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface DWGIFVideoInfo : NSObject
{
    NSString *_videoURL;
    NSString *_videoId;
    NSString *_userId;
    NSString *_eventURL;
    NSString *_coverURL;
    NSString *_bizCode;
}

@property(copy, nonatomic) NSString *bizCode; // @synthesize bizCode=_bizCode;
@property(copy, nonatomic) NSString *coverURL; // @synthesize coverURL=_coverURL;
@property(copy, nonatomic) NSString *eventURL; // @synthesize eventURL=_eventURL;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(copy, nonatomic) NSString *videoURL; // @synthesize videoURL=_videoURL;
- (void).cxx_destruct;
- (id)init;

@end

