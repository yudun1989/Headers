//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface TBSearchIconViewComponent : NSObject
{
    NSMutableDictionary *_iconDataViewMap;
    NSMutableDictionary *_iconGroupContainerViewMap;
    NSDictionary *_iconData;
}

@property(retain, nonatomic) NSDictionary *iconData; // @synthesize iconData=_iconData;
@property(retain, nonatomic) NSMutableDictionary *iconGroupContainerViewMap; // @synthesize iconGroupContainerViewMap=_iconGroupContainerViewMap;
@property(retain, nonatomic) NSMutableDictionary *iconDataViewMap; // @synthesize iconDataViewMap=_iconDataViewMap;
- (void).cxx_destruct;
- (_Bool)checkIconExistByGroupPos:(id)arg1;
- (void)removeIconByGroupPos:(id)arg1;
- (id)getIconGroupContainerViewByGroupPos:(id)arg1;
- (void)hideAllIconGroupContainerView;
- (void)setIconGroupContainerViewByGroupPos:(id)arg1 enableAutoWidth:(_Bool)arg2 spaceWidth:(double)arg3 size:(struct CGSize)arg4 layoutStyle:(int)arg5;
- (void)setIconGroupContainerViewByGroupPos:(id)arg1 enableAutoWidth:(_Bool)arg2 spaceWidth:(double)arg3 frame:(struct CGRect)arg4 layoutStyle:(int)arg5;
- (double)getWidthByGroupPos:(id)arg1 height:(double)arg2;
- (void)setIconListViewCollectionByGroupPos:(id)arg1 parentView:(id)arg2;
- (void)configIconData:(id)arg1;

@end

