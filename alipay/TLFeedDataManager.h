//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TLFeedDataManager : NSObject
{
}

- (id)queryLocalPlumpFeedList:(id)arg1 needOptionList:(_Bool)arg2;
- (void)createFeed:(id)arg1 bunTypes:(id)arg2;
- (id)selectLocalPlumpOptionList:(id)arg1 feedId:(id)arg2 contactStore:(id)arg3;
- (void)queryLocalPlumpFeedList:(id)arg1 needOptionList:(_Bool)arg2 callback:(CDUnknownBlockType)arg3;

@end
