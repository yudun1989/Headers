//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface SettingTableItemMode : NSObject
{
    NSString *_groupText;
    NSString *_itemText;
    NSString *_detailText;
    long long _buttonType;
    NSString *_selectedSEL;
    NSString *_switchButtonSEL;
}

@property(retain, nonatomic) NSString *switchButtonSEL; // @synthesize switchButtonSEL=_switchButtonSEL;
@property(retain, nonatomic) NSString *selectedSEL; // @synthesize selectedSEL=_selectedSEL;
@property(nonatomic) long long buttonType; // @synthesize buttonType=_buttonType;
@property(retain, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(retain, nonatomic) NSString *itemText; // @synthesize itemText=_itemText;
@property(retain, nonatomic) NSString *groupText; // @synthesize groupText=_groupText;
- (void)dealloc;

@end

