//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface QQRichKeyBoradItem : NSObject
{
    NSString *_title;
    NSString *_imageName;
    NSString *_accessibilityLabel;
    id _userData;
    int _xo;
    unsigned long long _flag;
}

@property(nonatomic) unsigned long long flag; // @synthesize flag=_flag;
- (void)dealloc;

// Remaining properties
@property(copy, nonatomic) NSString *accessibilityLabel; // @dynamic accessibilityLabel;
@property(copy, nonatomic) NSString *imageName; // @dynamic imageName;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) id userData; // @dynamic userData;

@end

