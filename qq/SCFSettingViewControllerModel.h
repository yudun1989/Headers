//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface SCFSettingViewControllerModel : NSObject
{
    NSString *_uin;
    NSString *_nickName;
    long long _showType;
    _Bool _isSCFOn;
    _Bool _isSCFRingOn;
    _Bool _isSCFQZoneOn;
    int _xo;
}

- (void).cxx_destruct;

// Remaining properties
@property(nonatomic) _Bool isSCFOn; // @dynamic isSCFOn;
@property(nonatomic) _Bool isSCFQZoneOn; // @dynamic isSCFQZoneOn;
@property(nonatomic) _Bool isSCFRingOn; // @dynamic isSCFRingOn;
@property(copy, nonatomic) NSString *nickName; // @dynamic nickName;
@property(nonatomic) long long showType; // @dynamic showType;
@property(copy, nonatomic) NSString *uin; // @dynamic uin;

@end

