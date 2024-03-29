//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSURL;

@interface SCSearchWebViewNavigationItem : NSObject <NSCopying>
{
    NSURL *_url;
    long long _urlType;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithUrl:(id)arg1 urlType:(long long)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) long long urlType; // @synthesize urlType=_urlType;

@end

