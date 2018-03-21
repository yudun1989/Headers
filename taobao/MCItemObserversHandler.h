//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface MCItemObserversHandler : NSObject
{
    NSString *_uniqueKey;
    NSString *_type;
    NSMutableDictionary *_itemObservers;
}

@property(retain, nonatomic) NSMutableDictionary *itemObservers; // @synthesize itemObservers=_itemObservers;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *uniqueKey; // @synthesize uniqueKey=_uniqueKey;
- (void).cxx_destruct;
- (void)notifyItemChange:(id)arg1 data:(id)arg2;
- (void)removeObserver:(id)arg1 forItem:(id)arg2;
- (void)addObserver:(id)arg1 forItem:(id)arg2;
- (id)initWithType:(id)arg1 uniqueKey:(id)arg2;

@end
