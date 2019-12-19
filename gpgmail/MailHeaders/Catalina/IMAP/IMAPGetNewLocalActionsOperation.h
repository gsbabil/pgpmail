//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMAPPersistenceTaskOperation.h>

@protocol IMAPAccount, IMAPGetNewLocalActionsOperationDelegate;

@interface IMAPGetNewLocalActionsOperation : IMAPPersistenceTaskOperation
{
    id /*<IMAPGetNewLocalActionsOperationDelegate>*/ _delegate;
    long long _previousActionID;
    id /*<IMAPAccount>*/ _account;
}

@property(readonly, nonatomic) id /*<IMAPAccount>*/ account; // @synthesize account=_account;
@property(readonly, nonatomic) long long previousActionID; // @synthesize previousActionID=_previousActionID;
@property(nonatomic) __weak id /*<IMAPGetNewLocalActionsOperationDelegate>*/ delegate; // @synthesize delegate=_delegate;
//- (void).cxx_destruct;
- (void)main;
- (id)initWithDataSource:(id)arg1;
- (id)initWithPreviousActionID:(long long)arg1 account:(id)arg2;

@end
