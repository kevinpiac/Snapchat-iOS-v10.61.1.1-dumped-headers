//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface SCConversationGroupUpdate : NSObject <NSCopying>
{
    BOOL _type;
    NSString *_modifiedBy;
    NSString *_groupName;
    NSArray *_modifiedParticipants;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
- (unsigned long long)hash;
- (id)initWithModifiedBy:(id)arg1 groupName:(id)arg2 modifiedParticipants:(id)arg3 type:(BOOL)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *modifiedBy; // @synthesize modifiedBy=_modifiedBy;
@property(readonly, copy, nonatomic) NSArray *modifiedParticipants; // @synthesize modifiedParticipants=_modifiedParticipants;
@property(readonly, nonatomic) BOOL type; // @synthesize type=_type;

@end

