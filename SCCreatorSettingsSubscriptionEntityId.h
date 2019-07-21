//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCSnapchatter;

@interface SCCreatorSettingsSubscriptionEntityId : NSObject <NSCopying>
{
    unsigned long long _subtype;
    SCSnapchatter *_snapchatter_snapchatter;
    long long _publisher_publisherId;
    NSString *_publisher_displayName;
}

+ (id)publisherWithPublisherId:(long long)arg1 displayName:(id)arg2;
+ (id)snapchatterWithSnapchatter:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)internalInit;
- (_Bool)isEqual:(id)arg1;
- (void)matchSnapchatter:(CDUnknownBlockType)arg1 publisher:(CDUnknownBlockType)arg2;

@end
