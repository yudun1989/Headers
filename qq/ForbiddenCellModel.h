//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface ForbiddenCellModel : NSObject
{
    id _cellModel;
    int _cellStyle;
    id _target;
    int _xo;
    SEL _sel;
    SEL _cellCreateSelector;
}

+ (id)model:(id)arg1 cellStyle:(int)arg2 target:(id)arg3 Sel:(SEL)arg4 cellCreateSel:(SEL)arg5;
@property(nonatomic) SEL cellCreateSelector; // @synthesize cellCreateSelector=_cellCreateSelector;
@property(nonatomic) SEL sel; // @synthesize sel=_sel;

// Remaining properties
@property(retain, nonatomic) id cellModel; // @dynamic cellModel;
@property(nonatomic) int cellStyle; // @dynamic cellStyle;
@property(nonatomic) id target; // @dynamic target;

@end

