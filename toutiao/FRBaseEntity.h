//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface FRBaseEntity : NSObject
{
    double __cellHeight;
    long long __entityHeightChangeFlag;
    id __extObj;
}

@property(retain, nonatomic) id _extObj; // @synthesize _extObj=__extObj;
@property(nonatomic) long long _entityHeightChangeFlag; // @synthesize _entityHeightChangeFlag=__entityHeightChangeFlag;
@property(nonatomic) double _cellHeight; // @synthesize _cellHeight=__cellHeight;
- (void).cxx_destruct;
- (void)entityHeightChanged;
- (id)init;

@end

