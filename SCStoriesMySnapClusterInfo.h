//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCStoriesMySnapClusterInfo : NSObject <NSCopying>
{
    NSString *_clusterId;
    NSString *_clusterName;
    NSString *_clusterDisplayName;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *clusterDisplayName; // @synthesize clusterDisplayName=_clusterDisplayName;
@property(readonly, copy, nonatomic) NSString *clusterId; // @synthesize clusterId=_clusterId;
@property(readonly, copy, nonatomic) NSString *clusterName; // @synthesize clusterName=_clusterName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithClusterId:(id)arg1 clusterName:(id)arg2 clusterDisplayName:(id)arg3;
- (_Bool)isEqual:(id)arg1;

@end

