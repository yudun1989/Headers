//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSArray;

@interface MBKTicketsModel : NSObject <NSCoding>
{
    int _currentDisplay;
    int _waitForPayOrdersNum;
    NSArray *_tickets;
}

@property(retain, nonatomic) NSArray *tickets; // @synthesize tickets=_tickets;
@property(nonatomic) int waitForPayOrdersNum; // @synthesize waitForPayOrdersNum=_waitForPayOrdersNum;
@property(nonatomic) int currentDisplay; // @synthesize currentDisplay=_currentDisplay;
- (void).cxx_destruct;
- (id)parseTickes:(id)arg1;
- (id)initWith:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(id)arg1;

@end

