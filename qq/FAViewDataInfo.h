//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface FAViewDataInfo : NSObject
{
    int _xo;
    int _tagId;
    _Bool _hidden;
    _Bool _loading;
    _Bool _enabled;
    id _content;
    id _extendId;
}

- (void)dealloc;
- (id)initWithTagID:(int)arg1 Hidden:(_Bool)arg2 content:(id)arg3;

// Remaining properties
@property(retain, nonatomic) id content; // @dynamic content;
@property(nonatomic) _Bool enabled; // @dynamic enabled;
@property(retain, nonatomic) id extendId; // @dynamic extendId;
@property(nonatomic) _Bool hidden; // @dynamic hidden;
@property(nonatomic) _Bool loading; // @dynamic loading;
@property(nonatomic) int tagId; // @dynamic tagId;

@end

