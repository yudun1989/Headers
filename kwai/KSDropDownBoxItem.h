//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIView;

@interface KSDropDownBoxItem : NSObject
{
    CDUnknownBlockType _selectedBlock;
    NSString *_title;
    UIView *_itemView;
}

@property(retain, nonatomic) UIView *itemView; // @synthesize itemView=_itemView;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) CDUnknownBlockType selectedBlock; // @synthesize selectedBlock=_selectedBlock;
- (void).cxx_destruct;

@end

