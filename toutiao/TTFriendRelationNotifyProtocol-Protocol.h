//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString;
@protocol TTFriendRelationValueChangedProtocol;

@protocol TTFriendRelationNotifyProtocol
- (void)registerSelectorObserver:(id <TTFriendRelationValueChangedProtocol>)arg1;
- (void)registerPropertyObserver:(id)arg1 keypath:(NSString *)arg2;
- (void)removeObserver:(id)arg1;
- (void)notifyAllObserversValue:(id)arg1;
@end

