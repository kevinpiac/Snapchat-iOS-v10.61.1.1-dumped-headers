//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDictionary, NSString;

@interface SCArchivedGroups : NSObject <NSCoding>
{
    NSDictionary *_groups;
    NSString *_selfUsername;
}

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
@property(readonly) NSDictionary *groups; // @synthesize groups=_groups;
- (id)initWithCoder:(id)arg1;
- (id)initWithGroups:(id)arg1 selfUsername:(id)arg2;
@property(readonly, nonatomic) NSString *selfUsername; // @synthesize selfUsername=_selfUsername;

@end

