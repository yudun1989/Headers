//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface QQGroupNoticeModel : NSObject
{
    NSString *_imgUrl;
    NSString *_title;
    NSString *_content;
    long long _notifyID;
    NSString *_clickUrl;
}

@property(nonatomic) NSString *clickUrl; // @synthesize clickUrl=_clickUrl;
@property(nonatomic) long long notifyID; // @synthesize notifyID=_notifyID;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *imgUrl; // @synthesize imgUrl=_imgUrl;
- (void)dealloc;

@end

