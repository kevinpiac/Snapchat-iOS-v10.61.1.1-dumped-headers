//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SSTabBarButton, UIColor;

@interface SSTabBarItem : NSObject <NSCopying>
{
    _Bool _selected;
    _Bool _viewLoaded;
    NSString *_title;
    NSString *_imageName;
    UIColor *_tintColor;
    long long _badgeCount;
    SSTabBarButton *_view;
    CDUnknownBlockType _action;
}

+ (id)tabBarItemWithImageName:(id)arg1 title:(id)arg2 tintColor:(id)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(nonatomic) long long badgeCount; // @synthesize badgeCount=_badgeCount;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
- (id)initWithWithImageName:(id)arg1 title:(id)arg2 tintColor:(id)arg3;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic, getter=isViewLoaded) _Bool viewLoaded; // @synthesize viewLoaded=_viewLoaded;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) SSTabBarButton *view; // @synthesize view=_view;
- (void)viewTapped:(id)arg1;

@end

