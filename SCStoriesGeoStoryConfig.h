//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCStoriesLocation;

@interface SCStoriesGeoStoryConfig : NSObject <NSCopying>
{
    long long _privacyType;
    SCStoriesLocation *_center;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SCStoriesLocation *center; // @synthesize center=_center;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithPrivacyType:(long long)arg1 center:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) long long privacyType; // @synthesize privacyType=_privacyType;

@end

