//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SCContactPermissionRequesting;

@interface SCContactPermissionRequestServices : NSObject
{
    id <SCContactPermissionRequesting> _contactPermissionRequester;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SCContactPermissionRequesting> contactPermissionRequester; // @synthesize contactPermissionRequester=_contactPermissionRequester;
- (id)initWithContactPermissionRequester:(id)arg1;

@end

