//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, UIImage;

@interface BEEGCellModel : NSObject
{
    _Bool _isMoreModel;
    NSString *_name;
    NSString *_iconUrl;
    NSString *_actionUrl;
    UIImage *_defaultIcon;
    NSDictionary *_extDic;
}

@property(retain, nonatomic) NSDictionary *extDic; // @synthesize extDic=_extDic;
@property(nonatomic) _Bool isMoreModel; // @synthesize isMoreModel=_isMoreModel;
@property(retain, nonatomic) UIImage *defaultIcon; // @synthesize defaultIcon=_defaultIcon;
@property(retain, nonatomic) NSString *actionUrl; // @synthesize actionUrl=_actionUrl;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

