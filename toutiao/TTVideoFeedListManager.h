//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSHashTable;

@interface TTVideoFeedListManager : NSObject
{
    NSHashTable *_serviceArray;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSHashTable *serviceArray; // @synthesize serviceArray=_serviceArray;
- (void).cxx_destruct;
- (void)removeArticleByUniqueId:(id)arg1;
- (id)init;

@end
