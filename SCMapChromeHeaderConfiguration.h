//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMapTable, UIView;

@interface SCMapChromeHeaderConfiguration : NSObject
{
    NSArray *_topLeftViews;
    NSArray *_topRightViews;
    UIView *_topCenterView;
    NSMapTable *_insetsForViews;
}

- (void).cxx_destruct;
- (id)initWithTopLeftViews:(id)arg1 topRightViews:(id)arg2 topCenterView:(id)arg3 insetsForViews:(id)arg4;
@property(readonly, nonatomic) NSMapTable *insetsForViews; // @synthesize insetsForViews=_insetsForViews;
@property(readonly, nonatomic) UIView *topCenterView; // @synthesize topCenterView=_topCenterView;
@property(readonly, nonatomic) NSArray *topLeftViews; // @synthesize topLeftViews=_topLeftViews;
@property(readonly, nonatomic) NSArray *topRightViews; // @synthesize topRightViews=_topRightViews;

@end
