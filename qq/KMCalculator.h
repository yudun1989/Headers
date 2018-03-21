//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface KMCalculator : NSObject
{
    int *lx;
    int *ly;
    int *linky;
    int *visx;
    int *visy;
    int *slack;
    int nx;
    int ny;
    KMCalculator *_transpose;
    int _resultWeight;
    NSArray *_twoDArray;
}

@property(readonly, nonatomic) int resultWeight; // @synthesize resultWeight=_resultWeight;
@property(readonly, nonatomic) NSArray *twoDArray; // @synthesize twoDArray=_twoDArray;
@property(readonly, nonatomic) int *resultMatch; // @synthesize resultMatch=linky;
@property(readonly, nonatomic) int ny; // @synthesize ny;
@property(readonly, nonatomic) int nx; // @synthesize nx;
- (void).cxx_destruct;
- (void)km;
- (_Bool)find:(int)arg1;
- (int)x:(int)arg1 y:(int)arg2;
- (void)dealloc;
- (id)initWithTwoDArray:(id)arg1;

@end

