//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface QZConfigManagement : NSObject
{
    NSArray *_taskAdvIds;
    NSMutableDictionary *_clearDic;
    NSMutableDictionary *_taskList;
}

+ (id)animationImagesWithPath:(id)arg1 imageHandle:(CDUnknownBlockType)arg2;
+ (id)sharedInstance;
@property(readonly, nonatomic) NSMutableDictionary *taskList; // @synthesize taskList=_taskList;
- (void).cxx_destruct;
- (_Bool)isShouldClear:(int)arg1;
- (void)clearAllData:(id)arg1;
- (void)loadData:(id)arg1;
- (id)init;

@end

