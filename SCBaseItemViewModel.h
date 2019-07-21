//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCBaseItemViewModel-Protocol.h"

@class NSString, UIColor;

@interface SCBaseItemViewModel : NSObject <SCBaseItemViewModel>
{
    double _contentInterimSpacing;
    UIColor *_topSeparatorColor;
    UIColor *_bottomSeparatorColor;
    struct UIEdgeInsets _contentInsets;
    struct UIEdgeInsets _topSeparatorInsets;
    struct UIEdgeInsets _bottomSeparatorInsets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *bottomSeparatorColor; // @synthesize bottomSeparatorColor=_bottomSeparatorColor;
@property(nonatomic) struct UIEdgeInsets bottomSeparatorInsets; // @synthesize bottomSeparatorInsets=_bottomSeparatorInsets;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) double contentInterimSpacing; // @synthesize contentInterimSpacing=_contentInterimSpacing;
- (id)init;
@property(retain, nonatomic) UIColor *topSeparatorColor; // @synthesize topSeparatorColor=_topSeparatorColor;
@property(nonatomic) struct UIEdgeInsets topSeparatorInsets; // @synthesize topSeparatorInsets=_topSeparatorInsets;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

