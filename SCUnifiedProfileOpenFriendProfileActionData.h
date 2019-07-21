//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCFriendUnifiedProfileConfiguration, SCSnapchatter;

@interface SCUnifiedProfileOpenFriendProfileActionData : NSObject <NSCopying>
{
    SCSnapchatter *_snapchatter;
    SCFriendUnifiedProfileConfiguration *_configuration;
    NSString *_sourcePageType;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SCFriendUnifiedProfileConfiguration *configuration; // @synthesize configuration=_configuration;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithSnapchatter:(id)arg1 configuration:(id)arg2 sourcePageType:(id)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCSnapchatter *snapchatter; // @synthesize snapchatter=_snapchatter;
@property(readonly, copy, nonatomic) NSString *sourcePageType; // @synthesize sourcePageType=_sourcePageType;

@end

