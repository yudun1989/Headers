//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface TTFClearanceSectionViewModel : NSObject
{
    long long _winnerNumber;
    NSString *_winnerCountStr;
    NSString *_totalBonusStr;
    NSString *_avgBonusStr;
    NSArray *_winnerAvatars;
    NSArray *_winnerNames;
}

@property(copy, nonatomic) NSArray *winnerNames; // @synthesize winnerNames=_winnerNames;
@property(copy, nonatomic) NSArray *winnerAvatars; // @synthesize winnerAvatars=_winnerAvatars;
@property(copy, nonatomic) NSString *avgBonusStr; // @synthesize avgBonusStr=_avgBonusStr;
@property(copy, nonatomic) NSString *totalBonusStr; // @synthesize totalBonusStr=_totalBonusStr;
@property(copy, nonatomic) NSString *winnerCountStr; // @synthesize winnerCountStr=_winnerCountStr;
@property(nonatomic) long long winnerNumber; // @synthesize winnerNumber=_winnerNumber;
- (void).cxx_destruct;

@end

