//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TCV3CognacParticipantState : NSObject
{
    _Bool _present;
    _Bool _speaking;
    long long _publishedMedia;
}

+ (id)CognacParticipantStateWithPresent:(_Bool)arg1 speaking:(_Bool)arg2 publishedMedia:(long long)arg3;
- (id)description;
- (id)initWithPresent:(_Bool)arg1 speaking:(_Bool)arg2 publishedMedia:(long long)arg3;
@property(readonly, nonatomic) _Bool present; // @synthesize present=_present;
@property(readonly, nonatomic) long long publishedMedia; // @synthesize publishedMedia=_publishedMedia;
@property(readonly, nonatomic) _Bool speaking; // @synthesize speaking=_speaking;

@end

