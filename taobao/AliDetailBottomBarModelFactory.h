//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AliDetailComponentModelBaseFactory.h"

@class NSDictionary;

@interface AliDetailBottomBarModelFactory : AliDetailComponentModelBaseFactory
{
    NSDictionary *_componentCreateRules;
}

@property(retain, nonatomic) NSDictionary *componentCreateRules; // @synthesize componentCreateRules=_componentCreateRules;
- (void).cxx_destruct;
- (id)createComponentModelDic;
- (_Bool)isHotItem:(id)arg1;
- (id)make:(id)arg1 data:(id)arg2;
- (id)componentMapDic;
- (void)setComponentMapDic:(id)arg1;

@end

