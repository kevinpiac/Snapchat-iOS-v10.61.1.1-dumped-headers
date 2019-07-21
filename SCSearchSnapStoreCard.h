//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, NSURL, SCNetworkImage;

@interface SCSearchSnapStoreCard : NSObject <NSCopying>
{
    NSString *_title;
    NSString *_subtitle;
    NSURL *_tapTargetUrl;
    SCNetworkImage *_thumbnailImage;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 tapTargetUrl:(id)arg3 thumbnailImage:(id)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSURL *tapTargetUrl; // @synthesize tapTargetUrl=_tapTargetUrl;
@property(readonly, copy, nonatomic) SCNetworkImage *thumbnailImage; // @synthesize thumbnailImage=_thumbnailImage;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;

@end

