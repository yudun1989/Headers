//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface QQDeviceLockTipMsg : NSObject
{
    _Bool _can_cancel;
    NSString *_title;
    NSString *_second_title;
    NSString *_third_title;
    NSArray *_wording_array;
    int _xo;
}

- (void)dealloc;

// Remaining properties
@property(nonatomic) _Bool can_cancel; // @dynamic can_cancel;
@property(retain, nonatomic) NSString *second_title; // @dynamic second_title;
@property(retain, nonatomic) NSString *third_title; // @dynamic third_title;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSArray *wording_array; // @dynamic wording_array;

@end

