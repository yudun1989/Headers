//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class LSLiveUserInfo, NSString;

@interface LSSyncCommentInfo : NSObject
{
    LSLiveUserInfo *_contactInfo;
    NSString *_message;
}

+ (id)instanceWithDic:(id)arg1;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) LSLiveUserInfo *contactInfo; // @synthesize contactInfo=_contactInfo;
- (void).cxx_destruct;

@end

