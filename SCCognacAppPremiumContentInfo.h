//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray;

@interface SCCognacAppPremiumContentInfo : NSObject <NSCopying>
{
    NSArray *_supportedPremiumContents;
    NSArray *_grantedPremiumContents;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSArray *grantedPremiumContents; // @synthesize grantedPremiumContents=_grantedPremiumContents;
- (unsigned long long)hash;
- (id)initWithSupportedPremiumContents:(id)arg1 grantedPremiumContents:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *supportedPremiumContents; // @synthesize supportedPremiumContents=_supportedPremiumContents;

@end
