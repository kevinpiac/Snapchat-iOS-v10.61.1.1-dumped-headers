//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSSet, NSString, NSURL, SCNetworkImage, UIColor;

@interface SCSearchDiscoverStoryViewModel : NSObject <NSCopying>
{
    NSString *_title;
    SCNetworkImage *_logoImage;
    UIColor *_color;
    NSURL *_deeplinkUrl;
    NSString *_publishedDate;
    NSSet *_dsnapIds;
    long long _cellStyle;
    NSString *_subtitle;
    SCNetworkImage *_coverImage;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long cellStyle; // @synthesize cellStyle=_cellStyle;
@property(readonly, copy, nonatomic) UIColor *color; // @synthesize color=_color;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) SCNetworkImage *coverImage; // @synthesize coverImage=_coverImage;
@property(readonly, copy, nonatomic) NSURL *deeplinkUrl; // @synthesize deeplinkUrl=_deeplinkUrl;
@property(readonly, copy, nonatomic) NSSet *dsnapIds; // @synthesize dsnapIds=_dsnapIds;
- (unsigned long long)hash;
- (id)initWithTitle:(id)arg1 logoImage:(id)arg2 color:(id)arg3 deeplinkUrl:(id)arg4 publishedDate:(id)arg5 dsnapIds:(id)arg6 cellStyle:(long long)arg7 subtitle:(id)arg8 coverImage:(id)arg9;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCNetworkImage *logoImage; // @synthesize logoImage=_logoImage;
@property(readonly, copy, nonatomic) NSString *publishedDate; // @synthesize publishedDate=_publishedDate;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;

@end

