//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface FADownInfo : NSObject
{
    NSArray *_downUrls;
    NSString *_strCookie;
}

@property(retain, nonatomic) NSString *strCookie; // @synthesize strCookie=_strCookie;
@property(retain, nonatomic) NSArray *downUrls; // @synthesize downUrls=_downUrls;
- (_Bool)infoValid;
- (void)dealloc;

@end

