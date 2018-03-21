//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GO2OServiceObject.h"

@class NSArray, NSString;

@interface GO2OMenuInfo : GO2OServiceObject
{
    _Bool _isSelected;
    NSString *_code;
    NSString *_name;
    NSString *_dname;
    NSArray *_icons;
    NSArray *_subMenuInfos;
    long long _selectedIndex;
    GO2OMenuInfo *_selectedSubMenu;
}

@property(retain, nonatomic) GO2OMenuInfo *selectedSubMenu; // @synthesize selectedSubMenu=_selectedSubMenu;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) NSArray *subMenuInfos; // @synthesize subMenuInfos=_subMenuInfos;
@property(retain, nonatomic) NSArray *icons; // @synthesize icons=_icons;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) NSString *dname; // @synthesize dname=_dname;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *code; // @synthesize code=_code;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

