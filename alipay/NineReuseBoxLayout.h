//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface NineReuseBoxLayout : NSObject
{
    double _itemXSpace;
    double _itemYSpace;
    unsigned long long _flow;
    unsigned long long _boxStyle;
    NSString *_x_y;
    struct CGSize _boxSize;
    struct UIEdgeInsets _boxInsets;
}

@property(retain, nonatomic) NSString *x_y; // @synthesize x_y=_x_y;
@property(nonatomic) unsigned long long boxStyle; // @synthesize boxStyle=_boxStyle;
@property(nonatomic) unsigned long long flow; // @synthesize flow=_flow;
@property(nonatomic) double itemYSpace; // @synthesize itemYSpace=_itemYSpace;
@property(nonatomic) double itemXSpace; // @synthesize itemXSpace=_itemXSpace;
@property(nonatomic) struct UIEdgeInsets boxInsets; // @synthesize boxInsets=_boxInsets;
@property(nonatomic) struct CGSize boxSize; // @synthesize boxSize=_boxSize;
- (void).cxx_destruct;

@end

