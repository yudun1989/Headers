//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MCExpressionElement;

@interface VRBExpressionManager : NSObject
{
    MCExpressionElement *_expressionElement;
}

+ (id)getInstance;
@property(retain, nonatomic) MCExpressionElement *expressionElement; // @synthesize expressionElement=_expressionElement;
- (void).cxx_destruct;
- (unsigned long long)getVRBExpressionTypeByMarkerData:(id)arg1;
- (id)getStandardItemByExpressionID:(id)arg1;
- (void)needReloadExpressionElement;

@end

