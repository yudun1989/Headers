//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface PersonalLevelInfo : NSObject
{
    unsigned int _onlineLevel;
    unsigned int _showOnlineLevel;
    unsigned long long _uin;
    NSMutableArray *_medalArr;
}

@property(nonatomic) unsigned int showOnlineLevel; // @synthesize showOnlineLevel=_showOnlineLevel;
@property(nonatomic) NSMutableArray *medalArr; // @synthesize medalArr=_medalArr;
@property(nonatomic) unsigned int onlineLevel; // @synthesize onlineLevel=_onlineLevel;
@property(nonatomic) unsigned long long uin; // @synthesize uin=_uin;
- (void)dealloc;

@end

