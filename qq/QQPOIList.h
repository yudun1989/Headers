//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface QQPOIList : NSObject
{
    NSString *_category;
    _Bool _hasMore;
    NSMutableArray *_list;
    int _xo;
}

- (_Bool)hasItemsOfPage:(int)arg1 count:(unsigned int)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(retain, nonatomic) NSString *category; // @dynamic category;
@property(nonatomic) _Bool hasMore; // @dynamic hasMore;
@property(retain, nonatomic) NSMutableArray *list; // @dynamic list;

@end
