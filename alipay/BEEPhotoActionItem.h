//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface BEEPhotoActionItem : NSObject
{
    _Bool _actionWillDisappearPhotoBrowser;
    unsigned long long _itemType;
    NSString *_title;
    NSDictionary *_actionParams;
}

@property(retain, nonatomic) NSDictionary *actionParams; // @synthesize actionParams=_actionParams;
@property(nonatomic) _Bool actionWillDisappearPhotoBrowser; // @synthesize actionWillDisappearPhotoBrowser=_actionWillDisappearPhotoBrowser;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long itemType; // @synthesize itemType=_itemType;
- (void).cxx_destruct;

@end

